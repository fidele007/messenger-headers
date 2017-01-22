/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, NSString, MNProfileImageModel, MNInboxImpressionLoggingData;

@interface MNThreadCollectionActor : FBValueObject <NSCopying> {

	BOOL _actorCanBeHidden;
	BOOL _allActorsCanBeHidden;
	FBMSyncedThreadKey* _threadKey;
	NSString* _name;
	MNProfileImageModel* _profileImageModel;
	unsigned long long _badgeType;
	unsigned long long _threadCollectionType;
	MNInboxImpressionLoggingData* _loggingData;
	unsigned long long _numberOfLines;
	long long _titleTruncationStyle;
	double _profileImageSize;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                          //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageModel * profileImageModel;                 //@synthesize profileImageModel=_profileImageModel - In the implementation block
@property (nonatomic,readonly) unsigned long long badgeType;                                 //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,readonly) unsigned long long threadCollectionType;                      //@synthesize threadCollectionType=_threadCollectionType - In the implementation block
@property (nonatomic,copy,readonly) MNInboxImpressionLoggingData * loggingData;              //@synthesize loggingData=_loggingData - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLines;                             //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,readonly) BOOL actorCanBeHidden;                                        //@synthesize actorCanBeHidden=_actorCanBeHidden - In the implementation block
@property (nonatomic,readonly) BOOL allActorsCanBeHidden;                                    //@synthesize allActorsCanBeHidden=_allActorsCanBeHidden - In the implementation block
@property (nonatomic,readonly) long long titleTruncationStyle;                               //@synthesize titleTruncationStyle=_titleTruncationStyle - In the implementation block
@property (nonatomic,readonly) double profileImageSize;                                      //@synthesize profileImageSize=_profileImageSize - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(MNProfileImageModel *)profileImageModel;
-(MNInboxImpressionLoggingData *)loggingData;
-(id)initWithThreadKey:(id)arg1 name:(id)arg2 profileImageModel:(id)arg3 badgeType:(unsigned long long)arg4 threadCollectionType:(unsigned long long)arg5 loggingData:(id)arg6 numberOfLines:(unsigned long long)arg7 actorCanBeHidden:(BOOL)arg8 allActorsCanBeHidden:(BOOL)arg9 titleTruncationStyle:(long long)arg10 profileImageSize:(double)arg11 ;
-(unsigned long long)threadCollectionType;
-(BOOL)actorCanBeHidden;
-(BOOL)allActorsCanBeHidden;
-(long long)titleTruncationStyle;
-(double)profileImageSize;
-(NSString *)name;
-(unsigned long long)numberOfLines;
-(FBMSyncedThreadKey *)threadKey;
-(unsigned long long)badgeType;
@end
