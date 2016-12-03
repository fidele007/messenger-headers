/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBQuickPromotionClause : NSObject {

	NSString* _type;
	NSArray* _filters;
	NSArray* _clauses;

}

@property (nonatomic,copy,readonly) NSString * type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clauses;              //@synthesize clauses=_clauses - In the implementation block
+(id)validClauseTypes;
-(id)_coerceNumberValue:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 withPromotion:(id)arg2 session:(id)arg3 ;
-(BOOL)_passesClauseWithContext:(id)arg1 withDebugInfo:(id*)arg2 ;
-(NSArray *)clauses;
-(BOOL)passesClauseWithContext:(id)arg1 withDebugInfo:(id*)arg2 ;
-(NSString *)type;
-(NSArray *)filters;
@end

