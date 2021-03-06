/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBComposerPoll : FBValueObject <NSCopying> {

	BOOL _canOthersAddOptions;
	BOOL _canOthersVoteOnMultipleOptions;
	NSArray* _pollOptions;

}

@property (nonatomic,copy,readonly) NSArray * pollOptions;                       //@synthesize pollOptions=_pollOptions - In the implementation block
@property (nonatomic,readonly) BOOL canOthersAddOptions;                         //@synthesize canOthersAddOptions=_canOthersAddOptions - In the implementation block
@property (nonatomic,readonly) BOOL canOthersVoteOnMultipleOptions;              //@synthesize canOthersVoteOnMultipleOptions=_canOthersVoteOnMultipleOptions - In the implementation block
-(id)initWithPollOptions:(id)arg1 canOthersAddOptions:(BOOL)arg2 canOthersVoteOnMultipleOptions:(BOOL)arg3 ;
-(NSArray *)pollOptions;
-(BOOL)canOthersAddOptions;
-(BOOL)canOthersVoteOnMultipleOptions;
@end

