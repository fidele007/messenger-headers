/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBQuicksilverPlayerInfoTableViewSection : FBValueObject <NSCopying> {

	BOOL _isNullState;
	long long _sectionType;
	NSString* _title;
	double _cellHeight;
	NSArray* _cellsViewModel;

}

@property (nonatomic,readonly) long long sectionType;                      //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) BOOL isNullState;                           //@synthesize isNullState=_isNullState - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) double cellHeight;                          //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cellsViewModel;              //@synthesize cellsViewModel=_cellsViewModel - In the implementation block
-(id)initWithSectionType:(long long)arg1 isNullState:(BOOL)arg2 title:(id)arg3 cellHeight:(double)arg4 cellsViewModel:(id)arg5 ;
-(BOOL)isNullState;
-(NSArray *)cellsViewModel;
-(NSString *)title;
-(double)cellHeight;
-(long long)sectionType;
@end

