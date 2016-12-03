/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMediaCreativeToolFilter.h>

@class NSString, NSDictionary;

@interface FBMediaCreativeToolAdjustmentFilter : NSObject <FBMediaCreativeToolFilter> {

	NSString* _name;
	float _saturation;
	float _brightness;
	float _contrast;
	float _hue;
	BOOL _hueColorize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSDictionary * settings; 
-(id)initWithName:(id)arg1 saturation:(float)arg2 brightness:(float)arg3 contrast:(float)arg4 hue:(float)arg5 hueColorize:(BOOL)arg6 ;
-(NSString *)name;
-(NSDictionary *)settings;
-(NSString *)type;
@end

