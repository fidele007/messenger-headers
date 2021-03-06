/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBWebrtcIceCandidateSdp, NSString;

@interface FBWebrtcIceCandidatePayload : NSObject <TBase, NSCoding> {

	FBWebrtcIceCandidateSdp* __sdp;
	int __sdpMediaLineIndex;
	NSString* __sdpMediaId;
	BOOL __sdp_isset;
	BOOL __sdpMediaLineIndex_isset;
	BOOL __sdpMediaId_isset;

}

@property (setter=setSdp:,getter=sdp,nonatomic,retain) FBWebrtcIceCandidateSdp * sdp; 
@property (assign,setter=setSdpMediaLineIndex:,getter=sdpMediaLineIndex,nonatomic) int sdpMediaLineIndex; 
@property (setter=setSdpMediaId:,getter=sdpMediaId,nonatomic,retain) NSString * sdpMediaId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)sdpIsSet;
-(void)unsetSdp;
-(void)setSdpMediaLineIndex:(int)arg1 ;
-(void)setSdpMediaId:(NSString *)arg1 ;
-(id)initWithSdp:(id)arg1 sdpMediaLineIndex:(int)arg2 sdpMediaId:(id)arg3 ;
-(int)sdpMediaLineIndex;
-(BOOL)sdpMediaLineIndexIsSet;
-(void)unsetSdpMediaLineIndex;
-(NSString *)sdpMediaId;
-(BOOL)sdpMediaIdIsSet;
-(void)unsetSdpMediaId;
-(void)read:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)validate;
-(FBWebrtcIceCandidateSdp *)sdp;
-(void)setSdp:(FBWebrtcIceCandidateSdp *)arg1 ;
-(void)write:(id)arg1 ;
@end

