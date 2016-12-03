/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcAutomationConnectionUpdateNotification : NSObject <TBase, NSCoding> {

	NSString* __localCandidateIPAddress;
	NSString* __localCandidatePort;
	NSString* __remoteCandidateIPAddress;
	NSString* __remoteCandidatePort;
	NSString* __localIPAddress;
	BOOL __localCandidateIPAddress_isset;
	BOOL __localCandidatePort_isset;
	BOOL __remoteCandidateIPAddress_isset;
	BOOL __remoteCandidatePort_isset;
	BOOL __localIPAddress_isset;

}

@property (setter=setLocalCandidateIPAddress:,getter=localCandidateIPAddress,nonatomic,retain) NSString * localCandidateIPAddress; 
@property (setter=setLocalCandidatePort:,getter=localCandidatePort,nonatomic,retain) NSString * localCandidatePort; 
@property (setter=setRemoteCandidateIPAddress:,getter=remoteCandidateIPAddress,nonatomic,retain) NSString * remoteCandidateIPAddress; 
@property (setter=setRemoteCandidatePort:,getter=remoteCandidatePort,nonatomic,retain) NSString * remoteCandidatePort; 
@property (setter=setLocalIPAddress:,getter=localIPAddress,nonatomic,retain) NSString * localIPAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setLocalCandidateIPAddress:(NSString *)arg1 ;
-(void)setLocalCandidatePort:(NSString *)arg1 ;
-(void)setRemoteCandidateIPAddress:(NSString *)arg1 ;
-(void)setRemoteCandidatePort:(NSString *)arg1 ;
-(void)setLocalIPAddress:(NSString *)arg1 ;
-(id)initWithLocalCandidateIPAddress:(id)arg1 localCandidatePort:(id)arg2 remoteCandidateIPAddress:(id)arg3 remoteCandidatePort:(id)arg4 localIPAddress:(id)arg5 ;
-(NSString *)localCandidateIPAddress;
-(BOOL)localCandidateIPAddressIsSet;
-(void)unsetLocalCandidateIPAddress;
-(NSString *)localCandidatePort;
-(BOOL)localCandidatePortIsSet;
-(void)unsetLocalCandidatePort;
-(NSString *)remoteCandidateIPAddress;
-(BOOL)remoteCandidateIPAddressIsSet;
-(void)unsetRemoteCandidateIPAddress;
-(NSString *)remoteCandidatePort;
-(BOOL)remoteCandidatePortIsSet;
-(void)unsetRemoteCandidatePort;
-(NSString *)localIPAddress;
-(BOOL)localIPAddressIsSet;
-(void)unsetLocalIPAddress;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

