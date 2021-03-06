/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBOpenGLFilter.h>
#import <Messenger/FBOverlayFilter.h>

@class NSMutableArray;

@interface FBCompositeFilter : FBOpenGLFilter <FBOverlayFilter> {

	NSMutableArray* _filters;

}
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)inputPixelFormat;
-(void)processCommand:(id)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 time:(SCD_Struct_FB33)arg3 ;
-(id)initWithFilters:(id)arg1 ;
-(void)setFilterContext:(id)arg1 ;
-(void)addFilter:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(void)setParameters:(id)arg1 ;
-(unsigned long long)outputPixelFormat;
@end

