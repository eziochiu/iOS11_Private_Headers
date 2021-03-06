/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
 */

@interface EAEmailAddressParser : NSObject

+ (void)_componentsForFullAddress:(id)arg1 rawAddressRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 localPartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 domainRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
+ (id)addressDomainFromAddress:(id)arg1;
+ (bool)addressIsEmptyGroup:(id)arg1;
+ (id)displayNameFromAddress:(id)arg1;
+ (void)insertPreviousRoute:(unsigned short*)arg1 ofLength:(unsigned long long)arg2 toBuffer:(unsigned short**)arg3 ofLength:(unsigned long long)arg4 atPosition:(unsigned short*)arg5 addSpace:(bool)arg6;
+ (bool)isLegalEmailAddress:(id)arg1;
+ (id)localPartFromAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;
+ (id)unsafeAddressLocalPartCharacterSet;

@end
