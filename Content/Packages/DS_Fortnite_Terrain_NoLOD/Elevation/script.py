import os

def rename_files(directory):
    for filename in os.listdir(directory):
        if "fbx_" in filename:
            new_filename = filename.replace("fbx_", "")
            os.rename(os.path.join(directory, filename), os.path.join(directory, new_filename))
            print(f"Renombrado {filename} a {new_filename}")

if __name__ == "__main__":
    script_directory = os.path.dirname(os.path.realpath(__file__))
    rename_files(script_directory)
