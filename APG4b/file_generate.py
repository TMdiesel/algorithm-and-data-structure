import pathlib

if __name__=="__main__":
    for i in range(1,16):
        filename=f"./q1/q_1.{i:02}.cpp"
        p_new = pathlib.Path(filename)
        try:
            with p_new.open(mode='x') as f:
              f.write('')
        except FileExistsError:
            print(f"{filename} already exists.")