/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _addingOutputDeviceUIDs;
    struct { 
        unsigned int outputContextType : 1; 
    }  _has;
    int  _outputContextType;
    NSMutableArray * _removingOutputDeviceUIDs;
}

@property (nonatomic, retain) NSMutableArray *addingOutputDeviceUIDs;
@property (nonatomic) bool hasOutputContextType;
@property (nonatomic) int outputContextType;
@property (nonatomic, retain) NSMutableArray *removingOutputDeviceUIDs;

+ (Class)addingOutputDeviceUIDsType;
+ (Class)removingOutputDeviceUIDsType;

- (int)StringAsOutputContextType:(id)arg1;
- (void)addAddingOutputDeviceUIDs:(id)arg1;
- (void)addRemovingOutputDeviceUIDs:(id)arg1;
- (id)addingOutputDeviceUIDs;
- (id)addingOutputDeviceUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)addingOutputDeviceUIDsCount;
- (void)clearAddingOutputDeviceUIDs;
- (void)clearRemovingOutputDeviceUIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOutputContextType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)outputContextType;
- (id)outputContextTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)removingOutputDeviceUIDs;
- (id)removingOutputDeviceUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)removingOutputDeviceUIDsCount;
- (void)setAddingOutputDeviceUIDs:(id)arg1;
- (void)setHasOutputContextType:(bool)arg1;
- (void)setOutputContextType:(int)arg1;
- (void)setRemovingOutputDeviceUIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
