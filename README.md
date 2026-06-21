### Goals:
- Can sync different folders via different Cloud Storage Providers
- One CSP for one folder
- Ability to add encryption for synced files
- Must work good with text files (.md, .canvas)
- Must support binary files (pictures). Maybe not very optimal
- Should support future development of Obsidian plugin for GUI and change detection
- customizable file ignore list
Non-goals:
- Multiple CSPs for one folder
- Having a backup copy in the cloud

### Architecture overview
The solution consists of:
- GUI app to configure folders, CSPs, encryption, etc;
- background service to detect changes and sync them;
- mercurial for patches exchange;
- rclone to access CSPs

