/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRoomSuggestionItemIdentifier : FBValueObject <NSCopying> {

	NSString* _inboxUnitId;
	NSString* _suggestionItemId;

}

@property (nonatomic,copy,readonly) NSString * inboxUnitId;                   //@synthesize inboxUnitId=_inboxUnitId - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionItemId;              //@synthesize suggestionItemId=_suggestionItemId - In the implementation block
-(NSString *)suggestionItemId;
-(NSString *)inboxUnitId;
-(id)initWithInboxUnitId:(id)arg1 suggestionItemId:(id)arg2 ;
@end

