import 'lib.dart_get_up_to_speed.dart' as dart_get_up_to_speed;
import 'dart:io';

void main(List<String> arguments) {
  print('To exit, press the number 0. To continue, any other number.');
  int exit = int.parse(stdin.readLineSync().toString());
  while (exit != 0) {
    num a = num.parse(stdin.readLineSync().toString());
    num b = num.parse(stdin.readLineSync().toString());
    String? symbol = stdin.readLineSync();
    print(dart_get_up_to_speed.calculation(a, b, symbol));
    print('To exit, press the number 0. To continue, any other number.');
    exit = int.parse(stdin.readLineSync().toString());
  }
}
