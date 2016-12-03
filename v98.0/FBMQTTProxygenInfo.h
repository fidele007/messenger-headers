/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTProxygenInfo : NSObject <TBase, NSCoding> {

	NSString* __thrift_ipAddr;
	NSString* __thrift_hostName;
	NSString* __thrift_vipAddr;
	BOOL __thrift_ipAddr_set;
	BOOL __thrift_hostName_set;
	BOOL __thrift_vipAddr_set;

}

@property (nonatomic,retain) NSString * ipAddr; 
@property (nonatomic,retain) NSString * hostName; 
@property (nonatomic,retain) NSString * vipAddr; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setIpAddr:(NSString *)arg1 ;
-(void)setVipAddr:(NSString *)arg1 ;
-(id)initWithIpAddr:(id)arg1 hostName:(id)arg2 vipAddr:(id)arg3 ;
-(NSString *)ipAddr;
-(BOOL)ipAddrIsSet;
-(void)unsetIpAddr;
-(BOOL)hostNameIsSet;
-(void)unsetHostName;
-(NSString *)vipAddr;
-(BOOL)vipAddrIsSet;
-(void)unsetVipAddr;
-(NSString *)hostName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setHostName:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
@end

