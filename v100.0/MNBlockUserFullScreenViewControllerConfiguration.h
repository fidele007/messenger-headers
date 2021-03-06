/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MNThreadClientSummaryUpdateCreating;
@class NSString;

@interface MNBlockUserFullScreenViewControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _isReportable;
	BOOL _isModal;
	BOOL _showTopicsOnly;
	NSString* _userId;
	id<MNThreadClientSummaryUpdateCreating> _summaryUpdateCreator;

}

@property (nonatomic,copy,readonly) NSString * userId;                                                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL isReportable;                                                         //@synthesize isReportable=_isReportable - In the implementation block
@property (nonatomic,readonly) BOOL isModal;                                                              //@synthesize isModal=_isModal - In the implementation block
@property (nonatomic,readonly) BOOL showTopicsOnly;                                                       //@synthesize showTopicsOnly=_showTopicsOnly - In the implementation block
@property (nonatomic,readonly) id<MNThreadClientSummaryUpdateCreating> summaryUpdateCreator;              //@synthesize summaryUpdateCreator=_summaryUpdateCreator - In the implementation block
-(id)initWithUserId:(id)arg1 isReportable:(BOOL)arg2 isModal:(BOOL)arg3 showTopicsOnly:(BOOL)arg4 summaryUpdateCreator:(id)arg5 ;
-(BOOL)isReportable;
-(BOOL)showTopicsOnly;
-(id<MNThreadClientSummaryUpdateCreating>)summaryUpdateCreator;
-(BOOL)isModal;
-(NSString *)userId;
@end

