/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(void)setPublic_key:(NSData *)arg1 ;
-(id)initWithPublic_key:(id)arg1 id:(int)arg2 ;
-(NSData *)public_key;
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
