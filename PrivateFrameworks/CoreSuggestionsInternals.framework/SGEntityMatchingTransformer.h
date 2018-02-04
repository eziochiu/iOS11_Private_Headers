/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGEntityMatchingTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _addressMapping;
    NSDataDetector * _dataDetector;
    NSString * _dateMapping;
    NSString * _emailMapping;
    NSString * _phoneMapping;
}

@property (retain) NSString *addressMapping;
@property (retain) NSDataDetector *dataDetector;
@property (retain) NSString *dateMapping;
@property (retain) NSString *emailMapping;
@property (retain) NSString *phoneMapping;

+ (id)withPhoneMapping:(id)arg1 emailMapping:(id)arg2 addressMapping:(id)arg3 andDateMapping:(id)arg4;

- (void).cxx_destruct;
- (id)addressMapping;
- (id)dataDetector;
- (id)dateMapping;
- (id)emailMapping;
- (id)initWithPhoneMapping:(id)arg1 emailMapping:(id)arg2 addressMapping:(id)arg3 andDateMapping:(id)arg4;
- (id)phoneMapping;
- (void)setAddressMapping:(id)arg1;
- (void)setDataDetector:(id)arg1;
- (void)setDateMapping:(id)arg1;
- (void)setEmailMapping:(id)arg1;
- (void)setPhoneMapping:(id)arg1;
- (id)transform:(id)arg1;

@end
