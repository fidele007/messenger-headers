/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <FBSharedFramework/MNCollectionViewElementAppearanceTransitioning.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMessageRowKey, NSString;

@interface MNMessageCellElementAppearanceTransitioning : FBValueObject <MNCollectionViewElementAppearanceTransitioning, NSCopying> {

	BOOL _isLastReceived;
	BOOL _isTyping;
	MNMessageRowKey* _messageRowKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) MNMessageRowKey * messageRowKey;              //@synthesize messageRowKey=_messageRowKey - In the implementation block
@property (nonatomic,readonly) BOOL isLastReceived;                               //@synthesize isLastReceived=_isLastReceived - In the implementation block
@property (nonatomic,readonly) BOOL isTyping;                                     //@synthesize isTyping=_isTyping - In the implementation block
+(id)appearanceTransitioningForMessageRow:(id)arg1 ;
-(id)initWithMessageRowKey:(id)arg1 isLastReceived:(BOOL)arg2 isTyping:(BOOL)arg3 ;
-(MNMessageRowKey *)messageRowKey;
-(BOOL)isLastReceived;
-(BOOL)isTyping;
-(BOOL)canAppearFrom:(id)arg1 ;
-(BOOL)canDisappearTo:(id)arg1 ;
@end

