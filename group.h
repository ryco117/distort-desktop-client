#ifndef GROUP_H
#define GROUP_H

#include <QString>

class Group
{
public:
    Group(QString name, unsigned int subgroupIndex);
    Group(const Group&);

    QString getName() const;
    unsigned int getSubgroupIndex() const;

    void setSubgroupIndex(unsigned int);

private:
    QString name;
    unsigned int subgroupIndex;
};

#endif // GROUP_H
