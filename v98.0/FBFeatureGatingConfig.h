/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBFeatureGatingConfig : NSObject {

	BOOL _expectCompleteness;
	NSArray* _gatekeepers;

}

@property (nonatomic,copy,readonly) NSArray * gatekeepers;              //@synthesize gatekeepers=_gatekeepers - In the implementation block
@property (nonatomic,readonly) BOOL expectCompleteness;                 //@synthesize expectCompleteness=_expectCompleteness - In the implementation block
-(NSArray *)gatekeepers;
-(id)initWithGatekeepers:(id)arg1 expectCompleteness:(BOOL)arg2 ;
-(BOOL)expectCompleteness;
@end

