import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Deimantas95 {
    public static void main(String[] args) {
        Scanner inputScanner = new Scanner(System.in);

        Map.Entry<Integer, Integer> generalInformation = getNumberOfCitiesAndPolicemanLocation(inputScanner);
        List<Integer> cities = getCities(inputScanner, generalInformation.getKey());

        int caughtBurglars = burglarsFounder(generalInformation, cities);
        System.out.println("Caught burglars = " + caughtBurglars);
    }

    private static Map.Entry<Integer, Integer> getNumberOfCitiesAndPolicemanLocation(Scanner inputScanner) {
        boolean dataInputFlag = true;
        int numberOfCities = 0;
        int policemanCity = 0;

        while (dataInputFlag) {
            System.out.println("Enter numbers of city and location of police officer");
            numberOfCities = inputScanner.nextInt();
            policemanCity = inputScanner.nextInt();
            dataInputFlag = false;

            if (policemanCity > numberOfCities) {
                System.out.println("Policeman has to live in one of the cities!");
                dataInputFlag = true;
            }
        }
        return Map.entry(numberOfCities, policemanCity);
    }

    private static List<Integer> getCities(Scanner inputScanner, int numberOfCities) {
        System.out.printf("Enter %d cities \n", numberOfCities);
        List<Integer> cities = new ArrayList<>();
        for (int i = 0; i < numberOfCities; i++) {
            cities.add(inputScanner.nextInt());
        }
        return cities;
    }

    public static int burglarsFounder(Map.Entry<Integer, Integer> generalInformation, List<Integer> cities) {
        int caughtBurglarsCounter = 0;
        int policemanLocation = generalInformation.getValue();
        int citiesCount = generalInformation.getKey();

        if (cities.get(policemanLocation - 1) > 0) {
            caughtBurglarsCounter++;
        }

        for (int i = 1; i < citiesCount; i++) {
            if (policemanLocation - 1 - i >= 0 && policemanLocation - 1 + i <= citiesCount) {
                if (cities.get(policemanLocation - 1 - i) > 0 && cities.get(policemanLocation - 1 + i) > 0) {
                    caughtBurglarsCounter += 2;
                }
            } else if (policemanLocation - 1 - i >= 0 && cities.get(policemanLocation - 1 - i) > 0) {
                caughtBurglarsCounter++;
            } else if (policemanLocation - 1 + i <= citiesCount - 1 && cities.get(policemanLocation - 1 + i) > 0) {
                caughtBurglarsCounter++;
            }
        }
        return caughtBurglarsCounter;
    }
}