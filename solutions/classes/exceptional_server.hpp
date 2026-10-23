#pragma once

void handle_request(int A, int B) {
    try {
        int res = Server::compute(A, B);
        cout << res << endl;
    } catch (const std::bad_alloc &e) {
        cout << "Not enough memory" << endl;
    } catch (const std::exception &e) {
        cout << "Exception: " << e.what() << endl;
    } catch (...) {
        cout << "Other Exception" << endl;
    }
}
