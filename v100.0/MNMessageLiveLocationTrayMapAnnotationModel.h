/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface MNMessageLiveLocationTrayMapAnnotationModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldShowEta;
	BOOL _isStale;
	NSString* _senderId;
	NSString* _messageLiveLocationId;
	NSDate* _updatedTime;

}

@property (nonatomic,copy,readonly) NSString * senderId;                           //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageLiveLocationId;              //@synthesize messageLiveLocationId=_messageLiveLocationId - In the implementation block
@property (nonatomic,copy,readonly) NSDate * updatedTime;                          //@synthesize updatedTime=_updatedTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowEta;                                 //@synthesize shouldShowEta=_shouldShowEta - In the implementation block
@property (nonatomic,readonly) BOOL isStale;                                       //@synthesize isStale=_isStale - In the implementation block
-(NSString *)senderId;
-(NSDate *)updatedTime;
-(NSString *)messageLiveLocationId;
-(BOOL)shouldShowEta;
-(id)initWithSenderId:(id)arg1 messageLiveLocationId:(id)arg2 updatedTime:(id)arg3 shouldShowEta:(BOOL)arg4 isStale:(BOOL)arg5 ;
-(BOOL)isStale;
@end
