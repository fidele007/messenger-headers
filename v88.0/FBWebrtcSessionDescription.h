/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcSessionDescription : NSObject <TBase, NSCoding> {

	NSString* __sessionId;
	NSString* __sessionVersion;
	BOOL __supportsMsid;
	BOOL __useIceLite;
	BOOL __sessionId_isset;
	BOOL __sessionVersion_isset;
	BOOL __supportsMsid_isset;
	BOOL __useIceLite_isset;

}

@property (setter=setSessionId:,getter=sessionId,nonatomic,retain) NSString * sessionId; 
@property (setter=setSessionVersion:,getter=sessionVersion,nonatomic,retain) NSString * sessionVersion; 
@property (assign,setter=setSupportsMsid:,getter=supportsMsid,nonatomic) BOOL supportsMsid; 
@property (assign,setter=setUseIceLite:,getter=useIceLite,nonatomic) BOOL useIceLite; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSessionVersion:(NSString *)arg1 ;
-(void)setSupportsMsid:(BOOL)arg1 ;
-(void)setUseIceLite:(BOOL)arg1 ;
-(id)initWithSessionId:(id)arg1 sessionVersion:(id)arg2 supportsMsid:(BOOL)arg3 useIceLite:(BOOL)arg4 ;
-(BOOL)sessionIdIsSet;
-(void)unsetSessionId;
-(NSString *)sessionVersion;
-(BOOL)sessionVersionIsSet;
-(void)unsetSessionVersion;
-(BOOL)supportsMsid;
-(BOOL)supportsMsidIsSet;
-(void)unsetSupportsMsid;
-(BOOL)useIceLite;
-(BOOL)useIceLiteIsSet;
-(void)unsetUseIceLite;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
@end

