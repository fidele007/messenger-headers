/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>

@class NSMutableArray, MNConversationContact;

@interface FBWebRTCCallCellData : FBValueObject {

	BOOL _isVoiceMail;
	NSMutableArray* _timeSortedCallList;
	MNConversationContact* _otherParticipant;

}

@property (nonatomic,copy,readonly) NSMutableArray * timeSortedCallList;                   //@synthesize timeSortedCallList=_timeSortedCallList - In the implementation block
@property (nonatomic,copy,readonly) MNConversationContact * otherParticipant;              //@synthesize otherParticipant=_otherParticipant - In the implementation block
@property (assign,nonatomic) BOOL isVoiceMail;                                             //@synthesize isVoiceMail=_isVoiceMail - In the implementation block
-(BOOL)isVoiceMail;
-(MNConversationContact *)otherParticipant;
-(id)lastCall;
-(id)initWithAggregatedCalls:(id)arg1 ;
-(NSMutableArray *)timeSortedCallList;
-(void)setIsVoiceMail:(BOOL)arg1 ;
@end

