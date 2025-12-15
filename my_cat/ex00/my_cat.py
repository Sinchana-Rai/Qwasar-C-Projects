import sys
def my_cat():
    files = sys.argv[1:]

    if not files:
        return "No files.."

    for each_file in files:
        with open(each_file, 'r') as file:
            file_content = file.read()
            print(file_content, end='')

if __name__ == "__main__":
    my_cat()