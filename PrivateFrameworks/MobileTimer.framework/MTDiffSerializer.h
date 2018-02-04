/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTDiffSerializer : MTStorageWriter

- (id)_serializingProtocol;
- (bool)mt_isReadingFromPersistence;
- (bool)mt_isWritingToPersistence;
- (bool)mt_isWritingToStorage;

@end