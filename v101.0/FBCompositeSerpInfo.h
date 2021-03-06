/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBCompositeSerpInfo : FBValueObject <NSCopying> {

	BOOL _exactMatch;
	BOOL _renderDebugInfo;
	NSString* _title;
	NSString* _typeaheadSessionID;
	NSString* _candidateSessionID;
	NSString* _videoHomeSessionID;
	NSString* _queryString;
	unsigned long long _experienceType;
	unsigned long long _resultsStyle;
	id _scopedSearchScopeEntity;

}

@property (nonatomic,copy,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID;              //@synthesize typeaheadSessionID=_typeaheadSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * candidateSessionID;              //@synthesize candidateSessionID=_candidateSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoHomeSessionID;              //@synthesize videoHomeSessionID=_videoHomeSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString;                     //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,readonly) unsigned long long experienceType;               //@synthesize experienceType=_experienceType - In the implementation block
@property (nonatomic,readonly) unsigned long long resultsStyle;                 //@synthesize resultsStyle=_resultsStyle - In the implementation block
@property (nonatomic,readonly) BOOL exactMatch;                                 //@synthesize exactMatch=_exactMatch - In the implementation block
@property (nonatomic,readonly) BOOL renderDebugInfo;                            //@synthesize renderDebugInfo=_renderDebugInfo - In the implementation block
@property (nonatomic,copy,readonly) id scopedSearchScopeEntity;                 //@synthesize scopedSearchScopeEntity=_scopedSearchScopeEntity - In the implementation block
-(NSString *)typeaheadSessionID;
-(unsigned long long)resultsStyle;
-(unsigned long long)experienceType;
-(id)initWithTitle:(id)arg1 typeaheadSessionID:(id)arg2 candidateSessionID:(id)arg3 videoHomeSessionID:(id)arg4 queryString:(id)arg5 experienceType:(unsigned long long)arg6 resultsStyle:(unsigned long long)arg7 exactMatch:(BOOL)arg8 renderDebugInfo:(BOOL)arg9 scopedSearchScopeEntity:(id)arg10 ;
-(NSString *)candidateSessionID;
-(NSString *)videoHomeSessionID;
-(BOOL)exactMatch;
-(BOOL)renderDebugInfo;
-(id)scopedSearchScopeEntity;
-(NSString *)title;
-(NSString *)queryString;
@end

