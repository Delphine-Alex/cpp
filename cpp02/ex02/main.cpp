/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:10:22 by dpaiva            #+#    #+#             */
/*   Updated: 2026/01/02 17:10:29 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

int main( void )
{
    // Fixed a;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;

    // std::cout << b << std::endl;

    // std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "\n=== TESTS DIVISION ===" << std::endl;

    // Test 1 : Division normale
    std::cout << "\nTest 1 : 10 / 2 = ";
    Fixed c(10);
    Fixed d(2);
    std::cout << (c / d) << std::endl;

    // Test 2 : Division par zéro (DANGER !)
    std::cout << "\nTest 2 : 10 / 0 = ";
    Fixed e(10);
    Fixed f(0);
    std::cout << (e / f) << " (INFINITY!)" << std::endl;

    // Test 3 : 0 / 10
    std::cout << "\nTest 3 : 0 / 10 = ";
    Fixed g(0);
    Fixed h(10);
    std::cout << (g / h) << std::endl;

    // Test 4 : 0 / 0 (NaN)
    std::cout << "\nTest 4 : 0 / 0 = ";
    Fixed i(0);
    Fixed j(0);
    std::cout << (i / j) << " (NaN!)" << std::endl;

    std::cout << "\n=== TESTS COMPARAISON ===" << std::endl;

    Fixed k(10);
    Fixed l(20);
    Fixed m(10);
    Fixed n(10.5f);

    // Test == (égalité)
    std::cout << "\nTest == :" << std::endl;
    std::cout << "10 == 10 : " << (k == m) << " (1 = true)" << std::endl;
    std::cout << "10 == 20 : " << (k == l) << " (0 = false)" << std::endl;
    std::cout << "10 == 10.5 : " << (k == n) << " (0 = false)" << std::endl;

    // Test != (différent)
    std::cout << "\nTest != :" << std::endl;
    std::cout << "10 != 20 : " << (k != l) << " (1 = true)" << std::endl;
    std::cout << "10 != 10 : " << (k != m) << " (0 = false)" << std::endl;

    // Test > (supérieur)
    std::cout << "\nTest > :" << std::endl;
    std::cout << "20 > 10 : " << (l > k) << " (1 = true)" << std::endl;
    std::cout << "10 > 20 : " << (k > l) << " (0 = false)" << std::endl;
    std::cout << "10 > 10 : " << (k > m) << " (0 = false)" << std::endl;

    // Test < (inférieur)
    std::cout << "\nTest < :" << std::endl;
    std::cout << "10 < 20 : " << (k < l) << " (1 = true)" << std::endl;
    std::cout << "20 < 10 : " << (l < k) << " (0 = false)" << std::endl;
    std::cout << "10 < 10 : " << (k < m) << " (0 = false)" << std::endl;

    // Test >= (supérieur ou égal)
    std::cout << "\nTest >= :" << std::endl;
    std::cout << "20 >= 10 : " << (l >= k) << " (1 = true)" << std::endl;
    std::cout << "10 >= 10 : " << (k >= m) << " (1 = true)" << std::endl;
    std::cout << "10 >= 20 : " << (k >= l) << " (0 = false)" << std::endl;

    // Test <= (inférieur ou égal)
    std::cout << "\nTest <= :" << std::endl;
    std::cout << "10 <= 20 : " << (k <= l) << " (1 = true)" << std::endl;
    std::cout << "10 <= 10 : " << (k <= m) << " (1 = true)" << std::endl;
    std::cout << "20 <= 10 : " << (l <= k) << " (0 = false)" << std::endl;

    // Test avec floats
    std::cout << "\nTest avec floats :" << std::endl;
    Fixed x(5.5f);
    Fixed y(5.50001f);
    std::cout << "5.5 == 5.5 : " << (x == x) << " (1 = true)" << std::endl;
    std::cout << "5.5 == 5.50001 : " << (x == y) << " (peut être false si différence détectée)" << std::endl;

    return 0;
}
