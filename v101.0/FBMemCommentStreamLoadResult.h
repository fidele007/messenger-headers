/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStreamLoadResult.h>

@protocol FBConnectionPageProtocol;
@class FBMemFeedback;

@interface FBMemCommentStreamLoadResult : FBStreamLoadResult {

	BOOL _shouldResetPagingInfo;
	BOOL _gapWasDetected;
	FBMemFeedback* _feedback;
	id<FBConnectionPageProtocol> _commentSequence;

}

@property (assign,nonatomic) BOOL shouldResetPagingInfo;                                  //@synthesize shouldResetPagingInfo=_shouldResetPagingInfo - In the implementation block
@property (assign,nonatomic) BOOL gapWasDetected;                                         //@synthesize gapWasDetected=_gapWasDetected - In the implementation block
@property (nonatomic,readonly) FBMemFeedback * feedback;                                  //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) id<FBConnectionPageProtocol> commentSequence;              //@synthesize commentSequence=_commentSequence - In the implementation block
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasPreviousPage:(BOOL)arg3 hasNextPage:(BOOL)arg4 feedback:(id)arg5 commentSequence:(id)arg6 ;
-(BOOL)shouldResetPagingInfo;
-(void)setShouldResetPagingInfo:(BOOL)arg1 ;
-(BOOL)gapWasDetected;
-(void)setGapWasDetected:(BOOL)arg1 ;
-(id<FBConnectionPageProtocol>)commentSequence;
-(id)description;
-(FBMemFeedback *)feedback;
@end
