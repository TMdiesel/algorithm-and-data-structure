import pathlib

if __name__=="__main__":
    chap=2
    num_question=6
    for i in range(num_question):
        filename=f"./q{chap}/q_{chap}.{i:02}.cpp"
        p_new = pathlib.Path(filename)
        try:
            with p_new.open(mode='x') as f:
              f.write('')
        except FileExistsError:
            print(f"{filename} already exists.")