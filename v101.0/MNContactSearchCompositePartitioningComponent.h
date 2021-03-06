/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MNContactSearchResultRanking;
@class NSString;

@interface MNContactSearchCompositePartitioningComponent : FBValueObject <NSCopying> {

	NSString* _title;
	/*^block*/id _test;
	id<MNContactSearchResultRanking> _rankingScheme;

}

@property (nonatomic,copy,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id test;                                                     //@synthesize test=_test - In the implementation block
@property (nonatomic,readonly) id<MNContactSearchResultRanking> rankingScheme;              //@synthesize rankingScheme=_rankingScheme - In the implementation block
-(id)test;
-(id<MNContactSearchResultRanking>)rankingScheme;
-(id)initWithTitle:(id)arg1 test:(/*^block*/id)arg2 rankingScheme:(id)arg3 ;
-(NSString *)title;
@end

