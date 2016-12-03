/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAppMessage, NSArray;

@interface MNMontageMessageViewModel : FBValueObject <NSCopying> {

	BOOL _unreadByViewer;
	MNAppMessage* _message;
	NSArray* _sortedReadUserIds;

}

@property (nonatomic,copy,readonly) MNAppMessage * message;                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortedReadUserIds;              //@synthesize sortedReadUserIds=_sortedReadUserIds - In the implementation block
@property (nonatomic,readonly) BOOL unreadByViewer;                           //@synthesize unreadByViewer=_unreadByViewer - In the implementation block
-(BOOL)unreadByViewer;
-(NSArray *)sortedReadUserIds;
-(id)initWithMessage:(id)arg1 sortedReadUserIds:(id)arg2 unreadByViewer:(BOOL)arg3 ;
-(MNAppMessage *)message;
@end

