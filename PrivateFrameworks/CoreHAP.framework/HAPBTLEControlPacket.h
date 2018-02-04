/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEControlPacket : HMFObject {
    bool  _continuationPacket;
    NSData * _payload;
    HAPBTLETransactionIdentifier * _transactionIdentifier;
    unsigned char  _type;
}

@property (getter=isContinuationPacket, nonatomic, readonly) bool continuationPacket;
@property (nonatomic, readonly, copy) NSData *payload;
@property (nonatomic, readonly) HAPBTLETransactionIdentifier *transactionIdentifier;
@property (nonatomic, readonly) unsigned char type;

+ (id)packetWithSerializedData:(id)arg1 error:(id*)arg2;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)init;
- (id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 continuationPacket:(bool)arg3 packetPayload:(id)arg4 maximumLength:(unsigned long long)arg5;
- (bool)isContinuationPacket;
- (id)payload;
- (id)serialize;
- (id)shortDescription;
- (id)transactionIdentifier;
- (unsigned char)type;

@end