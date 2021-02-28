import pathlib

if __name__=="__main__":
    chap=3
    max_question=6
    for i in range(max_question+1):
        filename=f"./q{chap}/q_{chap}.{i:02}.cpp"
        p_new = pathlib.Path(filename)
        try:
            with p_new.open(mode='x') as f:
              f.write('')
        except FileExistsError:
            print(f"{filename} already exists.")