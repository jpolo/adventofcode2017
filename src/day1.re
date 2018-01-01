let rec intlist_of_string = (s) =>
  switch s {
  | "" => []
  | _ => [int_of_char(s.[0]), ...intlist_of_string(String.sub(s, 1, String.length(s) - 1))]
  };

let run = (str) => List.fold_left((acc, value) => acc + value, 0, intlist_of_string(str));