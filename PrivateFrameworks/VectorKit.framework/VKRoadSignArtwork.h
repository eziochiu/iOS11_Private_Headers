/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadSignArtwork : NSObject {
    struct __CTFrame { } * _frame;
    struct __CTFramesetter { } * _framesetter;
    struct RoadSignGeneratedMetrics { 
        struct RoadSignPartMetrics { 
            unsigned char _type; 
            struct CGSize { 
                double width; 
                double height; 
            } _imageSize; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } _signBaseRect; 
            double _topEmptySpaceHeight; 
            double _bottomEmptySpaceHeight; 
            double _leftEmptySpaceWidth; 
            double _rightEmptySpaceWidth; 
            double _outsideImagePathExtension; 
            bool _hasArrows; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMin; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMax; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowTip; 
        } _leftRoadSignPartMetrics; 
        struct RoadSignPartMetrics { 
            unsigned char _type; 
            struct CGSize { 
                double width; 
                double height; 
            } _imageSize; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } _signBaseRect; 
            double _topEmptySpaceHeight; 
            double _bottomEmptySpaceHeight; 
            double _leftEmptySpaceWidth; 
            double _rightEmptySpaceWidth; 
            double _outsideImagePathExtension; 
            bool _hasArrows; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMin; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMax; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowTip; 
        } _rightRoadSignPartMetrics; 
        struct RoadSignPartMetrics { 
            unsigned char _type; 
            struct CGSize { 
                double width; 
                double height; 
            } _imageSize; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } _signBaseRect; 
            double _topEmptySpaceHeight; 
            double _bottomEmptySpaceHeight; 
            double _leftEmptySpaceWidth; 
            double _rightEmptySpaceWidth; 
            double _outsideImagePathExtension; 
            bool _hasArrows; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMin; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMax; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowTip; 
        } _stretchedRoadSignPartMetrics; 
        struct RoadSignPartMetrics { 
            unsigned char _type; 
            struct CGSize { 
                double width; 
                double height; 
            } _imageSize; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } _signBaseRect; 
            double _topEmptySpaceHeight; 
            double _bottomEmptySpaceHeight; 
            double _leftEmptySpaceWidth; 
            double _rightEmptySpaceWidth; 
            double _outsideImagePathExtension; 
            bool _hasArrows; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMin; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMax; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowTip; 
        } _middleRoadSignPartMetrics; 
        bool _hasMiddleSignPart; 
        struct CGSize { 
            double width; 
            double height; 
        } _imageSize; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _signBaseRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _glyphRect; 
        double _stretchedRoadSignPartWidth; 
        struct CGPoint { 
            double x; 
            double y; 
        } _arrowTipPosition; 
        struct CGPoint { 
            double x; 
            double y; 
        } _textPosition; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _textBounds; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _leftPartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _rightPartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _stretchedPartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _middlePartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _middleLeftStretchedPartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _middleRightStretchedPartRect; 
    }  _generatedMetrics;
    struct CGImage { } * _glyph;
    struct __CTLine { } * _line;
    struct RoadSignColoring { 
        bool _hasFillColor; 
        bool _hasStrokeColor; 
        bool _hasShadowColor; 
        bool _hasTextColor; 
        struct array<double, 4> { 
            double __elems_[4]; 
        } _fillColorComponents; 
        struct array<double, 4> { 
            double __elems_[4]; 
        } _strokeColorComponents; 
        struct array<double, 4> { 
            double __elems_[4]; 
        } _shadowColorComponents; 
        struct array<double, 4> { 
            double __elems_[4]; 
        } _textColorComponents; 
    }  _signColoring;
    struct RoadSignMetrics { 
        unsigned char _orientation; 
        double _scale; 
        double _contentScale; 
        double _arrowWeight; 
        double _arrowLength; 
        struct CGSize { 
            double width; 
            double height; 
        } _shadowOffset; 
        double _shadowRadius; 
        double _strokeWeight; 
        double _signHeight; 
        double _signMargin; 
        double _horizontalMargin; 
        double _verticalMargin; 
        double _cornerRadius; 
        struct CGSize { 
            double width; 
            double height; 
        } _glyphSize; 
    }  _signMetrics;
    struct RoadSignTextMetrics { 
        double _scale; 
        double _contentScale; 
        double _horizontalMargin; 
        double _verticalMargin; 
        double _verticalOffset; 
        double _textSize; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
            struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned long long __cap_; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            struct { 
                                unsigned char __size_; 
                            } ; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __first_; 
            } __r_; 
        } _fontFamily; 
        double _textDrawWidth; 
        double _textWrapWidth; 
    }  _textMetrics;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)image;
- (id)initWithString:(id)arg1 signMetrics:(struct RoadSignMetrics { unsigned char x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; struct CGSize { double x_14_1_1; double x_14_1_2; } x14; })arg2 textMetrics:(struct RoadSignTextMetrics { double x1; double x2; double x3; double x4; double x5; double x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; double x8; double x9; })arg3 signColoring:(struct RoadSignColoring { bool x1; bool x2; bool x3; bool x4; struct array<double, 4> { double x_5_1_1[4]; } x5; struct array<double, 4> { double x_6_1_1[4]; } x6; struct array<double, 4> { double x_7_1_1[4]; } x7; struct array<double, 4> { double x_8_1_1[4]; } x8; })arg4 glyph:(struct CGImage { }*)arg5;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localCollisionBounds;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localRenderBounds;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localSignBounds;
- (struct Matrix<float, 2, 1> { float x1[2]; })offsetPixelForPixel:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;

@end