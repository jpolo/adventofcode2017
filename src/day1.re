let parse = (str) => List.map(int_of_char, String.iter(str));

let run = (str) => List.fold_left((acc, value) => acc + value, 0, parse(str));
