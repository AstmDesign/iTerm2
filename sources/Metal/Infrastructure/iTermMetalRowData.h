//
//  iTermMetalRowData.h
//  iTerm2SharedARC
//
//  Created by George Nachman on 10/27/17.
//

#import <Foundation/Foundation.h>

#import "iTermData.h"
#import "iTermMarkRenderer.h"
#import "iTermASCIITextRenderer.h"

@class iTermMetalImageRun;

NS_CLASS_AVAILABLE(10_11, NA)
@interface iTermMetalRowData : NSObject
@property (nonatomic) int y;

// iTermMetalGlyphKey
@property (nonatomic, strong) iTermData *keysData;

// Number of elements in preceding arrays to use.
@property (nonatomic) int numberOfDrawableGlyphs;

@property (nonatomic) iTermMarkStyle markStyle;

// Last-changed timestamp, if used.
@property (nonatomic, strong) NSDate *date;

@property (nonatomic, readonly) NSMutableArray<iTermMetalImageRun *> *imageRuns;

@property (nonatomic, strong) iTermASCIIRow *asciiRow;

- (void)writeDebugInfoToFolder:(NSURL *)folder;

@end
