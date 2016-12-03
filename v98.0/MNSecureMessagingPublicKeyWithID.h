/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSString;

@interface MNSecureMessagingPublicKeyWithID : NSObject <TBase, NSCoding> {

	NSData* __public_key;
	int __id;
	BOOL __public_key_isset;
	BOOL __id_isset;

}

@property (setter=setPublic_key:,getter=public_key,nonatomic,retain) NSData * public_key; 
@property (assign,setter=setId:,getter=id,nonatomic) int id; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)idIsSet;
-(void)unsetId;
-(NSData *)public_key;
-(id)initWithPublic_key:(id)arg1 id:(int)arg2 ;
-(void)setPublic_key:(NSData *)arg1 ;
-(BOOL)public_keyIsSet;
-(void)unsetPublic_key;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
-(int)id;
-(void)setId:(int)arg1 ;
@end

