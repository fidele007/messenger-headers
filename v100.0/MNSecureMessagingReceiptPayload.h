/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNSecureMessagingReceiptPayload : NSObject <TBase, NSCoding> {

	long long __unix_time_micros;
	BOOL __unix_time_micros_isset;

}

@property (assign,setter=setUnix_time_micros:,getter=unix_time_micros,nonatomic) long long unix_time_micros; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setUnix_time_micros:(long long)arg1 ;
-(id)initWithUnix_time_micros:(long long)arg1 ;
-(long long)unix_time_micros;
-(BOOL)unix_time_microsIsSet;
-(void)unsetUnix_time_micros;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end
