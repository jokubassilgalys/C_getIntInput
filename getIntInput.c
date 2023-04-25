int getIntInput(char prompt[])
{
    int number;
    char ch, buffer[50];

    do {
        printf("%s", prompt);
        prompt = "Ivestis neteisinga, iveskite is naujo: ";

        fgets(buffer, sizeof buffer, stdin);

    } while (sscanf(buffer, "%d %c", &number, &ch) != 1);

    return number;
}
