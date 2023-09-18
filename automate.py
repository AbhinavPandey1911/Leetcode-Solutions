import os

def run():
    os.system('echo "pushing to github"')
    os.system('git add .')
    os.system('git commit -m "added solutions"')
    os.system('git push -u origin main')
    print("Success")
run()
