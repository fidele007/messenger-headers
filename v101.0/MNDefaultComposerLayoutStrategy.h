/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerLayoutStrategy.h>

@class NSString;

@interface MNDefaultComposerLayoutStrategy : NSObject <MNComposerLayoutStrategy> {

	double _minComposeViewWidth;
	double _maxTabWidth;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_widthCanFitOneLineComposer:(double)arg1 ;
-(BOOL)_heightCanFitTwoLineComposer:(double)arg1 ;
-(id)_layoutConfigurationForOneLineWithWidth:(double)arg1 totalNumberOfTabs:(unsigned long long)arg2 ;
-(id)_layoutConfigurationForTwoLineWithWidth:(double)arg1 totalNumberOfTabs:(unsigned long long)arg2 ;
-(id)layoutConfigurationForContext:(id)arg1 totalNumberOfTabs:(unsigned long long)arg2 actionViewWidth:(double)arg3 controlsViewWidth:(double)arg4 ;
-(id)initWithMinComposeViewWidth:(double)arg1 maxTabWidth:(double)arg2 ;
@end
