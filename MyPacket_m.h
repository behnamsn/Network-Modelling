//
// Generated file, do not edit! Created by nedtool 5.6 from MyPacket.msg.
//

#ifndef __MYPACKET_M_H
#define __MYPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>MyPacket.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet MyPacket
 * {
 *     int reTx = 0;
 * }
 * </pre>
 */
class MyPacket : public ::omnetpp::cPacket
{
  protected:
    int reTx;

  private:
    void copy(const MyPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MyPacket&);

  public:
    MyPacket(const char *name=nullptr, short kind=0);
    MyPacket(const MyPacket& other);
    virtual ~MyPacket();
    MyPacket& operator=(const MyPacket& other);
    virtual MyPacket *dup() const override {return new MyPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getReTx() const;
    virtual void setReTx(int reTx);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MyPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MyPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef __MYPACKET_M_H
