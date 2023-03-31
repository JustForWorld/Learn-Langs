import 'lib.dart_get_up_to_speed.dart' as dart_get_up_to_speed;
import 'dart:io';

void main(List<String> arguments) {
  num a = num.parse(stdin.readLineSync().toString());
  num b = num.parse(stdin.readLineSync().toString());
  String? symbol = stdin.readLineSync();
  print(dart_get_up_to_speed.calculation(a, b, symbol));
}
