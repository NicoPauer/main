/*
    Author: Nico Pauer
    Mail: nicolaspauer20@gmail.com
    Description: Give data about United States Presidents
    Last Update Date: May 14, 2023
*/
#include <stdio.h>

const int president_counter = 46;

int president_number, president;

void main()
{
  /* Tell about this program */
    printf("\n\tSHOW DATA ABOUT THE FIRSTS %d USA PRESIDENTS.\n", president_counter);
  /* Use president by president number for make code shorter and easy to update in the future. */ 
       /* Show the president for his president order number */
        printf("\nInput president number: ");
        scanf("%d", &president_number);
      /* Show the president */ 
        switch (president_number)
        {
            case 1: printf("\n\tName: George Washington\n\tPeriod: 1789-1797\n\tParty: Republican\n"); break;
            case 2: printf("\n\tName: John Adams\n\tPeriod: 1797-1801\n\tParty: Democrat\n"); break;
            case 3: printf("\n\tName: Thomas Jefferson\n\tPeriod: 1801-1809\n\tParty: Republican\n"); break;
            case 4: printf("\n\tName: James Madison\n\tPeriod: 1809-1817\n\tParty: Democrat\n"); break;
            case 5: printf("\n\tName: James Monroe\n\tPeriod: 1817-1825\n\tParty: Republican\n"); break;
            case 6: printf("\n\tName: John Quincy Adams\n\tPeriod: 1825-1829\n\tParty: Democrat\n"); break;
            case 7: printf("\n\tName: Andrew Jackson\n\tPeriod: 1829-1837\n\tParty: Democrat\n"); break;
            case 8: printf("\n\tName: Martin Van Buren\n\tPeriod: 1837-1841\n\tParty: Democrat\n"); break;
            case 9: printf("\n\tName: William Henry Harrison\n\tPeriod: 1841-1841\n\tParty: Democrat\n"); break;
            case 10: printf("\n\tName: John Tyler \n\tPeriod: 1841-1845\n\tParty: Democrat\n"); break;
            case 11:  printf("\n\tName: James K. Polk\n\tPeriod: 1845-1849\n\tParty: Democrat\n"); break;
            case 12: printf("\n\tName: Zachary Taylor\n\tPeriod: 1848-1850\n\tParty: Democrat\n"); break;
            case 13: printf("\n\tName: Millard Filmore\n\tPeriod: 1850-1853\n\tParty: Democrat\n"); break;
            case 14: printf("\n\tName: Franklin Pierce\n\tPeriod: 1853-1857\n\tParty: Democrat\n"); break;
            case 15: printf("\n\tName: James Buchanan\n\tPeriod: 1857-1861\n\tParty: Democrat\n"); break;
            case 16: printf("\n\tName: Abraham Lincoln\n\tPeriod: 1861-1865\n\tParty: Republican\n"); break;
            case 17: printf("\n\tName: Andrew Johnson\n\tPeriod: 1865-1869\n\tParty: Democrat\n"); break;
            case 18: printf("\n\tName: Ulysses S. Grant\n\tPeriod: 1869-1877\n\tParty: Democrat\n"); break;
            case 19: printf("\n\tName: Rutherford B. Hayes\n\tPeriod: 1877-1881\n\tParty: Democrat\n"); break;
            case 20: printf("\n\tName: James A. Garfield\n\tPeriod: 1881-1881\n\tParty: Democrat\n"); break;
            case 21: printf("\n\tName: Chester A. Arthur\n\tPeriod: 1881-1885\n\tParty: Democrat\n"); break;
            case 22: printf("\n\tName: Grover Cleveland\n\tPeriod: 1885-1889\n\tParty: Democrat\n"); break;
            case 23: printf("\n\tName: Benjamin Harrison\n\tPeriod: 1889-1893\n\tParty: Republican\n"); break;
            case 24: printf("\n\tName: Grover Cleveland\n\tPeriod: 1893-1897\n\tParty: Democrat\n"); break;
            case 25: printf("\n\tName: William McKinley\n\tPeriod: 1897-1901\n\tParty: Republican\n"); break;
            case 26: printf("\n\tName: Thedore Roosvelt\n\tPeriod: 1901-1909\n\tParty: Republican\n"); break;
            case 27: printf("\n\tName: William H. Taft\n\tPeriod: 1909-1913\n\tParty: Republican\n"); break;
            case 28: printf("\n\tName: Woodrow Wilson\n\tPeriod: 1913-1921\n\tParty: Democrat\n"); break;
            case 29: printf("\n\tName: Warren G. Harding\n\tPeriod: 1921-1923\n\tParty: Republican\n"); break;
            case 30: printf("\n\tName: Calvin Coolidge\n\tPeriod: 1923-1929\n\tParty: Republican\n"); break;
            case 31: printf("\n\tName: Herbert Hoover\n\tPeriod: 1929-1933\n\tParty: Republican\n"); break;
            case 32: printf("\n\tName: Franklin Delano Roosvelt\n\tPeriod: 1933-1945\n\tParty: Democrat\n"); break;
            case 33: printf("\n\tName: Harry S. Truman\n\tPeriod: 1945-1953\n\tParty: Democrat\n"); break;
            case 34: printf("\n\tName: Dwight D. Eisenhower\n\tPeriod: 1953-1961\n\tParty: Republican\n"); break;
            case 35: printf("\n\tName: John F. Kennedy\n\tPeriod: 1961-1963\n\tParty: Democrat\n"); break;
            case 36: printf("\n\tName: Lyndon B. Johnson\n\tPeriod: 1963-1969\n\tParty: Democrat\n"); break;
            case 37: printf("\n\tName: Richard M. Nixon\n\tPeriod: 1969-1974\n\tParty: Republican\n"); break;
            case 38: printf("\n\tName: Gerald Ford\n\tPeriod: 1974-1977\n\tParty: Republican\n"); break;
            case 39: printf("\n\tName: Jimmy Carter\n\tPeriod: 1977-1981\n\tParty: Democrat\n"); break;
            case 40: printf("\n\tName: Ronald Reagan\n\tPeriod: 1981-1989\n\tParty: Republican\n"); break;
            case 41: printf("\n\tName: George H. W. Bush\n\tPeriod: 1989-1993\n\tParty: Republican\n"); break;
            case 42: printf("\n\tName: Bill Clinton\n\tPeriod: 1993-2001\n\tParty: Democrat\n"); break;
            case 43: printf("\n\tName: George w. Bush\n\tPeriod: 2000-2009\n\tParty: Republican\n"); break;
            case 44: printf("\n\tName: Barack Obama\n\tPeriod: 2009-2017\n\tParty: Democrat\n"); break;
            case 45: printf("\n\tName: Donald Trump\n\tPeriod: 2017-2021\n\tParty: Republican\n"); break;
            case 46: printf("\n\tName: Joe Biden\n\tPeriod: 2021-2025\n\tParty: Democrat\n"); break;
        default: printf("\nTHE PRESIDENTS WAS %d CURRENTLY FROM 1 TO %d.", president_counter, president_counter); break;
    }
  /* Make the text clearer */
    printf("\n\n");
}
