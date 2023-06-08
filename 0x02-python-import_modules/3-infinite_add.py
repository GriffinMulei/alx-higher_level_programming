#!/usr/bin/python3
import sys

def sum_arguments():
    arguments = sys.argv[1:]  # Exclude the script name from the arguments list
    total = sum(int(arg) for arg in arguments)
    print(total)

if __name__ == '__main__':
    sum_arguments()
    #!/usr/bin/python3
import sys

if __name__ == "__main__":
    prompt = sys.argv[0]  # Script name
    arguments = ' '.join(sys.argv[1:])  # Join all arguments with spaces
    print(f"{prompt} {arguments}")

arguments = sys.argv[1:]  # Exclude the script name from the arguments list
    total = sum(int(arg) for arg in arguments)
    print(total)
