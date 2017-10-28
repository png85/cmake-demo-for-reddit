#include <database.h>
#include <match.h>
#include <record.h>
#include <spectogram.h>

#include <iostream>

std::ostream& operator<<(std::ostream& stream, const spectogram& sg)
{
    return stream << "spectogram with var=" << sg.get_var();
}

int main()
{
    {
        database db;
        db.do_stuff();
    }

    {
        match m;
        m.do_stuff();
    }

    {
        record r;
        auto   record_result = r.do_stuff();
        std::cout << "record_result=" << record_result << std::endl;
    }

    {
        spectogram sg;
        std::cout << sg << std::endl;
        sg.set_var(1234);
        std::cout << sg << std::endl;
    }

    return 0;
}
