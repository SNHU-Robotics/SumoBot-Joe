import subprocess

from datetime import date


today = date.today()

revision = (
    subprocess.check_output(
        [
            "git",
            "describe",
            "--abbrev=4",
            "--dirty",
            "--always",
            "--tags",
        ]
    )
    .strip()
    .decode("utf-8")
)

motd = f"\\r\\nStarting robot software. Using version {revision}.\\ncompiled on {today.strftime('%B %d, %Y')}.\\r\\n\\r\\n"

print(f"-DMOTD='\"{motd}\"'")
print(f"-DREVISION='\"{revision}\"'")
