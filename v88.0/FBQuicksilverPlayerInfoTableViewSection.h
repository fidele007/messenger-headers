/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
-(BOOL)isNullState;
-(NSArray *)cellsViewModel;
-(id)initWithSectionType:(long long)arg1 isNullState:(BOOL)arg2 title:(id)arg3 cellHeight:(double)arg4 cellsViewModel:(id)arg5 ;
-(NSString *)title;
-(double)cellHeight;
-(long long)sectionType;
@end
