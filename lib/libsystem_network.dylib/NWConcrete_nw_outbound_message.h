/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_outbound_message : NSObject <OS_nw_outbound_message> {
    NSObject<OS_nw_array> * antecedents;
    NSObject<OS_dispatch_data> * content;
    unsigned long long  deadline_milliseconds;
    unsigned int  relative_priority;
    NSObject<OS_nw_dictionary> * values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContent:(id)arg1;

@end
